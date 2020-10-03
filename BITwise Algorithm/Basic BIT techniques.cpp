// This cpp file contains some important BIT algorithms

// FINDING WEATHER ith BIT IS SET OR NOT

int get_i_bit( int NUMBER, int i)
{
    int bit_at_i = NUMBER & (1<<i); 
    return bit_at_i;   // returns 1 if the ith bit is 1 else return 0
}

// Making ith bit set

int set_i_bit(int NUMBER, int i)
{
    int set_at_i = (1<<i) | NUMBER; // ith bit of NUMBER is being set by this operation 
    return set_at_i;
}

// Making ith bit unset

int set_i_bit(int NUMBER, int i)

{
    if(NUMBER == 0)
    {
        return 0;
    }
    
    int set_at_i = ~(1<<i) & NUMBER; // ith bit of NUMBER is being set by this operation 
    return set_at_i;
}


