//u20513667
//Michael Viljoen

public interface Consensus<T>
{
    void decide();
    void propose(T value);
    void reset();
}
