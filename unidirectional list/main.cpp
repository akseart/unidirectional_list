//
//  main.cpp
//  unidirectional list
//
//  Created by Артем on 05.03.2018.
//  Copyright © 2018 Артем. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {

    struct unidirectionalList{
        int data;
        struct unidirectionalList *next = NULL;
    };
    struct unidirectionalList *start;
    struct unidirectionalList *current = new struct unidirectionalList;
    struct unidirectionalList *previous;
    start = current;
    current->data = 1;
    for (int i=2;i < 10;i++){
        previous = current;
        current = new struct unidirectionalList;
        previous->next = current;
        current->data = i;
    }
    current = start;
    while (current != NULL) {
        std::cout<< " "<<current->data;
        current = current->next;
    };
    
    previous = NULL;
    current = start;
    struct unidirectionalList *next = current->next;
    while (current != NULL) {
        current -> next = previous;
        previous = current;
        current = next;
        next = (next == NULL)?NULL:next->next;
    };
    start = previous;
    std::cout<<std::endl;
    current = start;
    while (current != NULL) {
        std::cout<< " "<<current->data;
        current = current->next;
    };
    std::cout <<std::endl<< "Hello, World!\n";
    return 0;
}
