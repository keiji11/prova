#include "ASpell.hpp"

ASpell::ASpell() {
	
}

ASpell::~ASpell() {}

ASpell::ASpell(ASpell const &copy) {
	(*this) = copy;
}

ASpell::ASpell(std::string const &name, std::string const &effects) {
	_name = name;
	_effects = effects;	
}

ASpell &ASpell::operator=(ASpell const &el) {
	_name = el._name;
	_effects = el._effects;
	return (*this);
}

std::string const &ASpell::getName() const {
	return _name;
}

std::string const &ASpell::getEffects() const {
	return _effects;
}

void    ASpell::launch(ATarget const &atarget) const {
	atarget.getHitBySpell((*this));
}

