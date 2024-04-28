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

