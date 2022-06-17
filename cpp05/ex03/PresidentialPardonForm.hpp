#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
#include "Form.hpp"

class PresidentialPardonForm : public Form 
{
    public:
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(PresidentialPardonForm const & src );
        ~PresidentialPardonForm();

        
       PresidentialPardonForm & operator=( PresidentialPardonForm const & src );
        std::string getTarget( void ) const;
        void    execute(Bureaucrat const & executor) const;
        
    private:
        std::string _target;
};

std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const & i );

#endif /* ****************************************** PRESIDENTIALPARDONFORM_H */