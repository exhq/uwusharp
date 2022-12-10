void sendexitcode(std::string pain, int errorline)
{
    std::cout << "ERROR at line ";
    if (pain == "nohello")
    {
        std::cout << "0:\n";
        std::cout << "senpai didnt say hello to me >:3\n";
        exit(1);
    }
};