#include <learner.h>
using namespace std;

int getPhrase(string userInput) {
  ifstream brainFile ( "brain/brain.txt" );

  string phrase;
  string response;

  while (getline(brainFile, phrase, '|')) {
    getline(brainFile, response);

    if(userInput == phrase) {
      cout << "[Mohammed]: " << response <<endl;
      brainFile.close();
      return 1;
    }

  }

  // Exit if user types "Quit"
  if(userInput == "Quit") {
    std::exit(0);
  }

  /*
    We couldn't find the phrase, so we'll need to go to the other
    function. Close the file once you are done using it.
  */
 brainFile.close();
 return 0;
}