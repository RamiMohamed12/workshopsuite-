#include "Objet2D.h"

int main() {
 
    Objet2D* obj2D = new Objet2D();


    Objet2D* rect = new Rectangle();

    std::cout << "Appel de m() sur un objet de type Objet2D :" << std::endl;
    obj2D->m(); 

    std::cout << "\nAppel de m() sur un objet de type Rectangle (stocké comme Objet2D*) :" << std::endl;
    rect->m(); 

   
    Objet2D* transformé = new Rectangle();
    std::cout << "\nAppel de m() sur un objet transformé en Rectangle :" << std::endl;
    transformé->m();

 
    delete obj2D;
    delete rect;
    delete transformé;

    return 0;
}
