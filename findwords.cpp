#include <iostream>
#include <vector>
#include <string>
#include <algorithm)

using namespace std;

bool searchWord (vector<string>&matrix, string word){
  int rows = matrix.size();
  int cols = matrix[0].size();

transform (word.begin(), word.end(), word.begin(), ::tolower);

for (int i = 0; i < rows; i++){
  for (int j = 0; j <= cols - word.size(); j++){
    string sub = matrix[i].substr(j, word.size());

    transform (sub.begin(), sub.end(), sub.begin(), ::tolower);
      if (sub == word){
          return true;
      }
  }
}

for (int i = 0; i <= rows - word.size(); i++){
  for (int j = 0; j < cols; j++){
    string vertical;
    for (int k = 0; k < word.size(); k++){
      vertical += matrix[i + k][j];
    }

      transform (vertical.begin(), vertical.end(), vertical begin(), :: tolower);
        if (vertical == word){
          return true;
        }
  }
}

// Mencari diagonal (dari kiri atas ke kanan bawah)
    for (int i = 0; i <= rows - word.size(); i++) {
        for (int j = 0; j <= cols - word.size(); j++) {
            string diagonal;
            for (int k = 0; k < word.size(); k++) {
                diagonal += matrix[i + k][j + k];
            }
            // Konversi sub-matrix menjadi huruf kecil
            transform(diagonal.begin(), diagonal.end(), diagonal.begin(), ::tolower);
            if (diagonal == word) {
                return true;
            }
        }
    }

    // Mencari diagonal (dari kanan atas ke kiri bawah)
    for (int i = 0; i <= rows - word.size(); i++) {
        for (int j = cols - 1; j >= word.size() - 1; j--) {
            string diagonal;
            for (int k = 0; k < word.size(); k++) {
                diagonal += matrix[i + k][j - k];
            }
            // Konversi sub-matrix menjadi huruf kecil
            transform(diagonal.begin(), diagonal.end(), diagonal.begin(), ::tolower);
            if (diagonal == word) {
                return true;
            }
        }
    }

    // Mencari diagonal (dari kanan bawah ke kiri atas)
    for (int i = rows - 1; i >= word.size() - 1; i--) {
        for (int j = cols - 1; j >= word.size() - 1; j--) {
            string diagonal;
            for (int k = 0; k < word.size(); k++) {
                diagonal += matrix[i - k][j - k];
            }
            // Konversi sub-matrix menjadi huruf kecil
            transform(diagonal.begin(), diagonal.end(), diagonal.begin(), ::tolower);
            if (diagonal == word) {
                return true;
            }
        }
    }

    // Search diagonally ( dari kiri bawah ke kanan atas)
    for (int i = rows - 1; i >= word.size() - 1; i--) {
        for (int j = 0; j <= cols - word.size(); j++) {
            string diagonal;
            for (int k = 0; k < word.size(); k++) {
                diagonal += matrix[i - k][j + k];
            }
            // Konversi sub-matrix menjadi huruf kecil
            transform(diagonal.begin(), diagonal.end(), diagonal.begin(), ::tolower);
            if (diagonal == word) {
                return true;
            }
        }
    }

    return false;
}
