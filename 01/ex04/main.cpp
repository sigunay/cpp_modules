#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv) {
// Adım 1: Komut Satırı Argümanlarını Doğrulama
	if (argc != 4) {
		std::cerr << "Using: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
		return 1;
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	if (s1.empty()) {
		std::cerr << "Error: <s1> is empty" << std::endl;
		return 1;
	}
// Adım 2: Giriş Dosyasını Açma
	std::ifstream file(filename.c_str());
	if (!file.is_open()) {
		std::cerr << "Error: " << filename << " not found" << std::endl;
		return 1;
	}
// Adım 3: Çıktı Dosyasını Oluşturma
	std::string outputFilename = filename + ".replace";
	std::ofstream outputFile(outputFilename.c_str());
	if (!outputFile.is_open()) {
		std::cerr << "Error: " << outputFilename << " could not be created" << std::endl;
		return 1;
	}
// Adım 4: Dosyayı Okuma ve Değiştirme
	std::string line;
	while (std::getline(file, line)) {
		size_t pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos) {
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
		}
		outputFile << line << std::endl;
	}
// Adım 5: Dosyaları Kapatma
	file.close();
	outputFile.close();
	std::cout << "File " << filename << " has been replaced and saved as " << outputFilename << std::endl;
	return 0;

}