using namespace std;
void sendexitcode(std::string pain, int errorline)
{
    cout << "ERROR at line ";
    if (pain == "nohello")
    {
        cout << "0:\n";
        cout << "senpai didnt say hello to me >:3\n";
        exit(1);
    }
};