#include <iostream>
using namespace std;

class LivingThing {
protected:
    LivingThing() {
        cout << "This is the constructor of LivingThing class." << endl;
    }

    void toString() {
        cout << "Called toString() function of LivingThing class." << endl;
    }
};

class Animal: public LivingThing {
protected:
    Animal() {
        cout << "This is the constructor of Animal class." << endl;
    }

    void toString() {
        cout << "Called toString() function of Animal class." << endl;
    }    
};

class Plant: public LivingThing {
protected:
    Plant() {
        cout << "This is the constructor of Plant class." << endl;
    }

    void toString() {
        cout << "Called toString() function of Plant class." << endl;
    }    
};

class Fish: public Animal {
protected:
    Fish() {
        cout << "This is the constructor of Fish class." << endl;
    }

    void toString() {
        cout << "Called toString() function of Fish class." << endl;
    }    
};

class Mammal: public Animal {
protected:
    Mammal() {
        cout << "This is the constructor of Mammal class." << endl;
    }

    void toString() {
        cout << "Called toString() function of Mammal class." << endl;
    }    
};

class Tree: public Plant {
protected:
    Tree() {
        cout << "This is the constructor of Tree class." << endl;
    }

    void toString() {
        cout << "Called toString() function of Tree class." << endl;
    }    
};

class Sardine: public Fish {
protected:
    Sardine() {
        cout << "This is the constructor of Sardine class." << endl;
    }

    void toString() {
        cout << "Called toString() function of Sardine class." << endl;
    }    
};

class Bass: public Fish {
protected:
    Bass() {
        cout << "This is the constructor of Bass class." << endl;
    }

    void toString() {
        cout << "Called toString() function of Bass class." << endl;
    }    
};

class Cat: public Mammal {
protected:
    Cat() {
        cout << "This is the constructor of Cat class." << endl;
    }

    void toString() {
        cout << "Called toString() function of Cat class." << endl;
    }    
};

class Tiger: public Cat {
protected:
    Tiger() {
        cout << "This is the constructor of Tiger class." << endl;
    }

    void toString() {
        cout << "Called toString() function of Tiger class." << endl;
    }    
};

class Lion: public Cat {
protected:
    Lion() {
        cout << "This is the constructor of Lion class." << endl;
    }

    void toString() {
        cout << "Called toString() function of Lion class." << endl;
    }    
};

class Chestnut: public Tree {
protected:
    Chestnut() {
        cout << "This is the constructor of Chestnut class." << endl;
    }

    void toString() {
        cout << "Called toString() function of Chestnut class." << endl;
    }    
};

class Cherry: public Tree {
protected:
    Cherry() {
        cout << "This is the constructor of Cherry class." << endl;
    }

    void toString() {
        cout << "Called toString() function of Cherry class." << endl;
    }    
};

void display(const LivingThing& obj) {
    obj.toString();
}

int main() {
    
}

// Make LivingThing virtual, public, const and overrideable
// Add override to each toString() function
