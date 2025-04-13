#pragma once

template <typename T>
class Pool
{
private:
	TArray<T*> pool;
	int size;

public:
	Pool(int32 InitialSize) : size(InitialSize)
	{
		for (int32 i = 0; i < size; ++i)
		{
			pool.Add(new T());
		}
	}

	~Pool()
	{
		for (T* Event : pool)
		{
			delete Event;
		}

		pool.Empty();
	}

	T* Allocate()
	{
		T* event;

		if (pool.Num() > 0)
		{
			event = pool.Pop();
		}
		else
		{
			event = new T();
		}
		return event;
	}

	void Deallocate(T* Event)
	{
		pool.Add(Event);
	}
};
