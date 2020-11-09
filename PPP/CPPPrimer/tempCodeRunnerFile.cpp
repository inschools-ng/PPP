

    pf = lengthCompare; // pf points to the fxn lengthcompare
    pf = &lengthCompare; // pf point sto the address of operator

    bool b1 = pf("hello", "hi"); // calls lengthCompare
    bool b2 = (*pf)("hello", "hi"); // equivalent
    bool b3 = lengthCompare("hello", "hi"); // equivalent

    
    pf = 0; //pf points to no pointer
    pf = sumLength; // return type differs
    pf = cstylestringCompare; // parameter type differs
    pf = lengthCompare; //fxn and ptr types match exactly



    cout << is_Shorter("franklin", "franklyn") << endl;
    return 0;
