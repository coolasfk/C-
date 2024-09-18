#include "Utils.hpp"
#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
    return;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("Robotomy", RRF_GRADE_SIGN, RRF_GRADE_EXEC, target), _target(target)
{
    return;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other): _target(other._target)
{
    return;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const &other)
{
    if(this!= &other)
    {
        this->_target = other._target;
    }
    return *this;
}

void RobotomyRequestForm::execute(RobotomyRequestForm const &executor) const
{
    if(!getIsSigned())
    throw FormNotSignedException();
    
    throw AForm::FormNotSignedException();
    if(getIsSigned() && executor.getGrade() < getExecGrade())
    {
        std::cout << DRILLING_NOISE << _target<< " has been robotomized successfully 50% of the time" << std::endl;
    else
    std::cout << B_PERIWINKLE << "Robotomy failed." << std::endl;

}



std::ostream& operator<<(std::ostream &out, RobotomyRequestForm const &form)
{
     out << "target: " << form.getTarget() << std::endl;
return out;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}


void RobotomyRequestForm::beSigned(const Bureaucrat& src)
 {
    if(src.getGrade() < MAX_GRADE)
        throw AForm::GradeTooHighException();
        if(src.getGrade() > MIN_GRADE)
        throw AForm::GradeTooLowException();
    if(src.getGrade() <= getSignGrade())
    setIsSigned(true);

    src.signFormA(*this);
 }