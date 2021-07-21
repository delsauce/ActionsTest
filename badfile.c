// This is a bad file

int main(int argc, char *argv[])
{
    while (true) {
        // comment
        if (something) {
            do_something();
        }
        else {
            do_something_else();
        }
    }

    if (not_bad) {
        good();
    }
    else if (so_so) {
        ok();
    }
    else {
        bad_bad_bad();
    }

    finally();
}
