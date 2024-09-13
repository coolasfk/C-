#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
  protected:
	std::string _type;

  public:
	WrongAnimal();  
	WrongAnimal& operator=(const WrongAnimal& other);
	WrongAnimal(const WrongAnimal& other);
	virtual ~WrongAnimal(); 
	std::string getType() const;
	void makeSound() const; 
};

#endif