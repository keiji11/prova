#pragma once

#include <iostream>

class ASpell;

class ATarget {
	private:
		std::string _type;
	public:
		ATarget();
		virtual ~ATarget();
		ATarget(ATarget const &copy);
		ATarget(std::string const &type);
		ATarget &operator=(ATarget const &el);
	
		std::string const &getType() const;
		virtual ATarget	*clone() const = 0;
	
		void	getHitBySpell(ASpell const &aspell) const;
};

#include "ASpell.hpp"
