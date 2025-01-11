#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
private:
	int	_fixedPointValue;	// sabit noktali sayiyi saklayan private member degisken
	static const int _fractionalBits = 8; // kesirli kismin bit sayisi

public:
	Fixed(); // default constructor

	Fixed(const Fixed& other); // copy constructor

	Fixed(const int value); // int deger alan constructor

	Fixed(const float value); // float deger alan constructor

	Fixed& operator=(const Fixed& other); // copy assignment operator

	~Fixed(); // destructor

	int	getRawBits() const; // sabit noktali sayiyi donduren getter fonksiyonu
	void setRawBits(int raw);	// sabit noktali sayiyi ayarlayan setter fonksiyonu
	int toInt() const; // sabit noktali sayiyi int'e ceviren fonksiyon
	float toFloat() const; // sabit noktali sayiyi float'a ceviren fonksiyon
};

	std::ostream& operator<<(std::ostream& os, const Fixed& fixed); // << operator overload

#endif