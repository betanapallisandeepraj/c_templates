all:
	gcc -g hello.c -o hello
	gcc -g hello_cmd_args.c -o hello_cmd_args
	gcc -g hello_cmd_args_descending.c -o hello_cmd_args_descending
	gcc -g hello_cmd_args_descending_recursive.c -o hello_cmd_args_descending_recursive
	gcc -g simple_main.c -o simple_main
	gcc -g all_data_types.c -o all_data_types
	gcc -g operators.c -o operators
	gcc -g conditions.c -o conditions

clean:
	rm hello hello_cmd_args hello_cmd_args_descending 
	rm hello_cmd_args_descending_recursive simple_main
	rm all_data_types operators conditions

