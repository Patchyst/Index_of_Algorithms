#include <string>
#include <numeric>

// Create a phone number based off of a string of numbers

using namespace std;

string createPhoneNumber(const int arr [10]){
  
  string number;
  vector <string> vectorString={"("};
  
  for (int i=0; i < 10; i++){
    string current = to_string(arr[i]);
    switch(i){
        case 2:
          vectorString.push_back(current);
          vectorString.push_back(")");
          vectorString.push_back(" ");
          break;
        case 5:
          vectorString.push_back(current);
          vectorString.push_back("-");
          break;
        default:
          vectorString.push_back(current);
          break;
    } 
  }
  number = accumulate(begin(vectorString), end(vectorString), number);
  return number;
}
