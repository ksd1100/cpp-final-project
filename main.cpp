#include <iostream> // cout, cin, getline
#include <string> // string
#include <algorithm> // transform

std::string respond(const std::string &input) { // makes a copy of user input
  std::string string = input;
  // transforms all characters in "string" variable into lowercase
  std::transform(string.begin(), string.end(), string.begin(), ::tolower);
  // if user input contains a certain statement it replies accordingly
  if (string.find("hello") != std::string::npos || string.find("hi") != std::string::npos) {
    return "Hello world!";
  }
  if (string.find("how are you") != std::string::npos) {
    return "I'm doing fine, thanks for asking.";
  }
  return "Sorry, I don't understand. Try again or type 'exit' to stop the program.";
}

int main() {
  std::string line;
  std::cout << "Chatbot> "; // prompt for user input
  while (std::getline(std::cin, line)) {
    if (line == "exit") break;
    std::cout << "Bot> " << respond(line) << "\n";
    std::cout << "Chatbot> ";
  }
  return 0; // successful termination
}
