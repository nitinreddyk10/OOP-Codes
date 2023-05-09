//  C++ allows us to allocate the memory of a variable or an array during run t ime. This is known as dynamic memory allocation

// we need to deallocate the memory manullay using delete

// the new operator allocates memoery to a varibale

// declare an int pointer
 int *a;

// dynamicaly allocate memory using the new keyword

 a =new int;

// assign value to allocated memoery
 *a= 45;
 
 // syntax
 
 pointervariable = new datatype;
 
 // suntax for deallocating memory
 
 delete pointervarible;
 
 Note: 
 
 If the program uses a large amount of unwanted memory using new, 
 the system may crash because there will be no memory available for the operating system. 
 In this case, the delete operator can help the system from crash.
