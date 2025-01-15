#include <learner.h>
using namespace std;

// Declare functions that will be called
void showMessage();
int getPhrase(string phrase);
void learner(string storePhrase);

int main () {
  std::string userInput;

  do {
    std::cout << "[You] : ";
    getline(std::cin, userInput);

    // x or X will terminate the program.

    if(userInput != "x" && userInput != "X") {
      if(getPhrase(userInput)) {
      // keep going
      } else {
      // Unknown input, ask user for response and store it
      learner(userInput);
      }
    }
  } while (userInput != "x" && userInput != "X");

  return 0;
}