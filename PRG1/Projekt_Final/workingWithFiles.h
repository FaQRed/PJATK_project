//
// Created by Kiryl Sankouski on 16/12/2023.
//

#ifndef PROJEKT_FINAL_WORKINGWITHFILES_H
#define PROJEKT_FINAL_WORKINGWITHFILES_H

#include "vector"
#include "book.h"

class workingWithFiles {

public:
    void createFile(string fileName);
    void writeToTxt(vector<book>& books, string fileName);
    void removeFile(string fileName);
    void outputFromTxt(string filename);
    void parseFromFile(string filePath, vector<book> &books);
    void searchByAuthorName(vector<book> &books);
    void searchByAuthorSurname(vector<book> &books);
    void searchByTitle(vector<book> &books);
    void searchByYear(vector<book> &books);
};


#endif //PROJEKT_FINAL_WORKINGWITHFILES_H
