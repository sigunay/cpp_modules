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

	Fixed(const int value); // int constructor

	Fixed(const float value); // float constructor

	Fixed& operator=(const Fixed& other); // copy assignment operator

	Fixed operator+(const Fixed& other) const; // + operator overload

	Fixed operator-(const Fixed& other) const; // - operator overload

	Fixed operator*(const Fixed& other) const; // * operator overload

	Fixed operator/(const Fixed& other) const; // / operator overload

	bool operator==(const Fixed& other) const; // == operator overload

	bool operator!=(const Fixed& other) const; // != operator overload

	bool operator<(const Fixed& other) const; // < operator overload

	bool operator>(const Fixed& other) const; // > operator overload

	bool operator<=(const Fixed& other) const; // <= operator overload

	bool operator>=(const Fixed& other) const; // >= operator overload

	Fixed& operator++();	// prefix ++ operator overload

	Fixed& operator--();	// prefix -- operator overload

	Fixed operator++(int);	// postfix ++ operator overload

	Fixed operator--(int);	// postfix -- operator overload

	~Fixed(); // destructor

	int	getRawBits() const; // sabit noktali sayiyi donduren getter fonksiyonu
	void setRawBits(int raw);	// sabit noktali sayiyi ayarlayan setter fonksiyonu
	int toInt() const; // sabit noktali sayiyi int'e ceviren fonksiyon
	float toFloat() const; // sabit noktali sayiyi float'a ceviren fonksiyon
	static Fixed& min(Fixed& a, Fixed& b);	// static min function
	static const Fixed& min(const Fixed& a, const Fixed& b);	// static const min function
	static Fixed& max(Fixed& a, Fixed& b);	// static max function
	static const Fixed& max(const Fixed& a, const Fixed& b);	// static const max function
};

	std::ostream& operator<<(std::ostream& os, const Fixed& fixed); // << operator overload

#endif