cc=g++
#prom=TestClientDataWrite
prom=TestClientDataRead
deps=$(shell find ./ -name "*.h")
#src=$(shell find ./ -name "*.cpp")
src = ClientData.cpp TestClientRead.cpp
obj=$(src:%.cpp=%.o)

$(prom):$(obj)
	$(cc) -o $(prom) $(obj)

%.o:%.cpp $(deps)
	$(cc) -c $< -o $@

clean:
	rm -rf $(obj) $(prom)      