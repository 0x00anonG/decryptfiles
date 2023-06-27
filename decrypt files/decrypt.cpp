#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
  // Get the file name from the user.
  cout << "Enter the file name: ";
  string filename;
  cin >> filename;
  // Open the file.
  ifstream infile(filename);
  if (!infile) {
    cout << "Error opening file.\n";
    return 1;
  }
  // Read the file contents into a string.
  string contents;
  infile >> contents;
  // Close the file.
  infile.close();
  // Remove the encryption from the file contents.
  contents = contents.substr(contents.find("encrypted:") + 10);
  // Write the decrypted contents back to the file.
  ofstream outfile(filename);
  outfile << contents;
  // Close the file.
  outfile.close();
  // Print a success message.
  cout << "File decrypted successfully.\n";
  return 0;
}
