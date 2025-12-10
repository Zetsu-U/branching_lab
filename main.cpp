#include <iostream>
#include <vector>
#include <string>

using std::string;
using std::vector;


vector<string> readLines(const string& path);

void printLines(const vector<string>& lines);

void writeLines(const vector<string>& lines, const string& path);

int main() {
    const string inputPath = "input.txt";
    const string outputPath = "output.txt";

    auto lines = readLines(inputPath);
    printLines(lines);
    writeLines(lines, outputPath);

    std::cout << "Done.\n";
    return 0;
}


vector<string> readLines(const string&) {
    return {};
}

void printLines(const vector<string>&) {
}

void writeLines(const vector<string>&, const string&) {
}
