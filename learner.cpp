/*
  This file is where the learning takes place. If the program comes across a
  phrase it doesn't know, it will prompt the user to enter a response to the
  phrase and add it to the file.
*/
#include <learner.h>
using namespace::std;

void learner(string inputPhrase) {
  string storePhrase = inputPhrase;

  std::cout << "Not found! What should the response be?" << storePhrase << " : ";
  std::string learningResponse;
  getline(std::cin, learningResponse);
  std::cout << learningResponse << endl;

  // open file for writing parameters indicate that you will 
  // APPEND to the end of the file
  std::ofstream saveBrain;

  saveBrain.open("brain/brain.txt", std::ios::out | std::ios::app);
  if(!saveBrain.is_open()) {
    std::cout << "Error opening file." << endl;
  } else {
    saveBrain <<endl <<storePhrase << "|" << learningResponse;
    saveBrain.close();
  }

  return;

}