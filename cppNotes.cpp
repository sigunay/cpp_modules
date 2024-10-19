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

