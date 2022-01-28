#pragma once

#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock {
        private:
                std::string _name;
                std::string _title;
                Warlock();
                Warlock(Warlock const &copy);
                Warlock &operator=(Warlock const &el);

		std::map<std::string, ASpell *> _spells;
        public:
                Warlock(std::string const &name, std::string const &title);
                ~Warlock();
                std::string const &getName() const;
                std::string const &getTitle() const;
                void    setTitle(std::string const &title);

                void    introduce() const;

		void	learnSpell(ASpell *aspell);
		void	forgetSpell(std::string spellname);
		void	launchSpell(std::string spellname, ATarget const &atarget);
};

