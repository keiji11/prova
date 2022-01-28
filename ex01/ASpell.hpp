#pragma once

#include <iostream>

class ATarget;

class ASpell {
	private:
		std::string _name;	
		std::string _effects;
	public:
		ASpell();
		virtual ~ASpell();
		ASpell(ASpell const &copy);
		ASpell(std::string const &name, std::string const &effects);
		ASpell &operator=(ASpell const &el);
		
		std::string const &getName() const;
		std::string const &getEffects() const;
		
		virtual ASpell *clone() const = 0;
		
		void	launch(ATarget const &atarget) const;
};

#include "ATarget.hpp"
