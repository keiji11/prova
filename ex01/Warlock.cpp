#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title) {
	_name = name;
	_title = title;
        std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock() {
        std::cout << this->_name << ": My job here is done!\n";
	std::map<std::string, ASpell *>::iterator it_begin = _spells.begin();
	std::map<std::string, ASpell *>::iterator it_end = _spells.end();
	while (it_begin != it_end)
	{
		delete it_begin->second;
		++it_begin;
	}
	_spells.clear();
}

std::string const &Warlock::getName() const {
        return _name;
}

std::string const &Warlock::getTitle() const {
        return _title;
}

void    Warlock::setTitle(std::string const &title) {
        _title = title;
}

void    Warlock::introduce() const {
        std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl; 
}

void    Warlock::learnSpell(ASpell *aspell) {
	if (aspell)
		_spells.insert(std::pair<std::string, ASpell *>(aspell->getName(), aspell->clone()));	
}

void    Warlock::forgetSpell(std::string spellname) {
	std::map<std::string, ASpell *>::iterator it = _spells.find(spellname);
	while(it != _spells.end())
		delete it->second;
	_spells.erase(spellname);
}

void    Warlock::launchSpell(std::string spellname, ATarget const &atarget) {
	ASpell *aspell = _spells[spellname];
	if (aspell)
		aspell->launch(atarget);
}

