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
