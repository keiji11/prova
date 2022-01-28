#include "ATarget.hpp"

ATarget::ATarget() {}

ATarget::~ATarget() {}

ATarget::ATarget(ATarget const &copy) {
	*this = copy;
}

ATarget::ATarget(std::string const &type) {
	_type = type;
}

ATarget &ATarget::operator=(ATarget const &el) {
	_type = el._type;
	return (*this);
}

std::string const &ATarget::getType() const {
	return _type;
}

void    ATarget::getHitBySpell(ASpell const &aspell) const {
	std::cout << _type << " has been " << aspell.getEffects() << "!" << std::endl;
}

