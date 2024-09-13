#include <iostream>
#include <cmath>

int main() {
    // Deklarasi variabel
    int choice;
    double num1, num2, result;

    // Menampilkan menu pilihan
    std::cout << "Pilih angka:\n";
    std::cout << "1 Perkalian\n";
    std::cout << "2 Pembagian\n";
    std::cout << "3 Pertambahan\n";
    std::cout << "4 P99engurangan\n";
    std::cout << "Masukkan pilihan Anda (1-4): ";
    std::cin >> choice;

    // Memeriksa input pilihan
    if (choice < 1 || choice > 4) {
        std::cout << "Pilihan tidak valid. Program akan berhenti.\n";
        return 1;
    }

    // Mengambil input angka dari pengguna
    std::cout << "Masukkan angka pertama: ";
    std::cin >> num1;
    std::cout << "Masukkan angka kedua: ";
    std::cin >> num2;

    // Melakukan operasi sesuai pilihan
    switch (choice) {
        case 1:
            result = num1 * num2;
            std::cout << "Hasil perkalian: " << result << std::endl;
            break;
        case 2:
            // Memeriksa pembagian dengan nol
            if (num2 == 0) {
                std::cout << "Kesalahan: Pembagi tidak boleh nol.\n";
            } else {
                result = num1 / num2;
                std::cout << "Hasil pembagian: " << result << std::endl;
            }
            break;
        case 3:
            result = num1 + num2;
            std::cout << "Hasil penjumlahan: " << result << std::endl;
            break;
        case 4:
            result = num1 - num2;
            std::cout << "Hasil pengurangan: " << result << std::endl;
            break;
        default:
            std::cout << "Pilihan tidak valid.\n";
            break;
    }

    return 0;
}
