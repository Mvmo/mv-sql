typedef struct {
	char* buffer;
	size_t buffer_length;
	ssize_t input_length;
} input_buffer_t;

input_buffer_t* new_input_buffer() {
	input_buffer_t* input_buffer = malloc(sizeof(input_buffer_t));
	input_buffer->buffer = NULL;
	input_buffer->buffer_length = 0;
	input_buffer->input_length = 0;

	return input_buffer;
}