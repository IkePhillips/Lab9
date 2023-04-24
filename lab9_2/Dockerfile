# Set the base image to use
FROM gcc:latest
# Copy the C program into the container
COPY myProgram.c .
# Compile the C program
RUN gcc -o myProgram myProgram.c
# Set the command to run when the container starts
CMD ["./myProgram"]