#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>

class TooMuchNumberException : public std::exception
{
    public:
        const char *what() const throw();
};

class NotEnoughNumberException : public std::exception
{
    public:
        const char *what() const throw();
};

class Span
{
    private:
        unsigned int max;
    public:
        Span();
        Span(unsigned int max);
        Span(const Span &other);
        Span &operator=(const Span &oher);
        ~Span();
        void addNumber(unsigned int nb);
        

};

#endif