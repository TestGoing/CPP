cc=g++
prom=CopyStructure
src=$(shell find ./ -name "*.cpp")
obj=$(src:%.cpp=%.o)

$(prom):$(obj)
	$(cc) -o $(prom) $(obj)
%.o:%.c
	$(cc) -c $< -o $@

clean:
	rm -rf $(obj) $(prom) 