#include "Intern.hpp"

int main()
{
    {
        Intern  someRandomIntern;
        AForm*   rrf;

        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        delete rrf;
        rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
        delete rrf;
        rrf = someRandomIntern.makeForm("shrubbery request", "bender");
        delete rrf;
    }
}