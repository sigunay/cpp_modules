#include <iostream>

// **INHERITANCE (Miras Alma)**
// Miras alma yöntemiyle bir sınıf based sınıftan miras alarak onun tüm 
// özelliklerine erişebilir. böylece miras alan sınıf based sınıfın alt sınıfı
// haline gelir. Alt sınıf base sınıfın private özelliklerine doğrudan erişemez.
// Yalnızca public ve protected access modifiers a doğrudan erişebilir.
// Ancak public içerisindeki fonksiyonlar yolu ile bu private özelliklere
// dolaylı erişim sağlayabilir.

// class Animal {
// // private:
// //	int x;
// public:
// 	void makeNoise() {
// 		std::cout << "Animal made noise!" << std::endl;
// 	}
// 	void check() {
// 		std::cout << "True!" << std::endl;
// 	}
// };

// class Dog : public Animal {
// public:
// 	void makeNoise() {
// 		std::cout << "Dog made noise!" << std::endl;
// 	}
// };

// int main() {
// 	Animal a;
// 	a.makeNoise();

// 	Dog d;
// 	d.makeNoise();
// 	d.check();
// 	return 0;
// }
//------------------------------------------------------------------------------

// **STANDARD STRİNG**
// += operatoru veya append ile stringe ekleme yapılabilir.

// int main() {
// 	std::string	str = "selam";
// 	str.append(" naber?");
// 	str += " iyidir senden?";
// 	std::cout << str << std::endl;
// }
//------------------------------------------------------------------------------


// **STRİNG**

// int main (){
// 	std::string name = "Ali";
// 	std::string surname = "Kabak";
// 	std::string pNumber = "+905467286273";

// 	std::string fullName = name + " " + surname;
// 	std::cout << fullName << std::endl;

// 	std::string code = pNumber.substr(0, 3);
// 	std::cout << "Phone number code: " << code << std::endl;

// 	std::cout << "Phone number length: " << pNumber.length() << std::endl;

// 	size_t	pos = pNumber.find("5467286273");
// 	if (pos != std::string::npos) {
// 		std::cout << "numara bulundu!" << std::endl;
// 	} else {
// 		std::cout << "numara bulunamadı" << std::endl;
// 	}
// 	return 0;
// }
//------------------------------------------------------------------------------


// **I/O MANİPULATORS**
// #include <iomanip>

// int main (){
// 	std::string name = "Ali";
// 	std::string surname = "Kabak";
// 	std::string pNumber = "5467286273";

// 	std::cout	<< std::setw(10) << std::right << "Name" << " | "
// 				<< std::setw(10) << std::right << "Surname" << " | "
// 				<< std::setw(10) << std::right << "Number" << " | " << std::endl;
// 	std::cout	<< std::setw(10) << std::right << name << " | "
// 				<< std::setw(10) << std::right << surname << " | "
// 				<< std::setw(10) << std::right << pNumber << " | " << std::endl;
// 	return 0;
// }
//------------------------------------------------------------------------------