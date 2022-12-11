using namespace std;
void sendexitcode(string error, int errorline)
{
    // THERES NO SWITCH CASE FOR STRINGS THE FUCK
    cout << "ERROR at line " << errorline << ":\n";
    if (error == "nohello")
    {
        cout << "senpai didnt say hello to me >:3\n";
        exit(1);
    }
    else if (error == "emptyfile")
    {
        cout << "woaaaaah 0_0 the file is soooo smol, still bigger than your pp\n";
        exit(1);
    }
};