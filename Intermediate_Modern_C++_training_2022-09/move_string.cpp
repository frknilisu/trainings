
#include <iostream>
#include <cstring>
#include <utility>
using namespace std;

class String {
    // Simple constructor that initializes the resource.
    explicit String(const char* s) : m_data(new char[strlen(s)+1]) {
        cout << "In String(const char*). length = " << strlen(s)+1 << "." << endl;
        memcpy(m_data, s, strlen(s)+1);
    };

    // Copy constructor.
    String(const String& str) : String(str.m_data) {};

    String(String&& str) noexcept : m_data(str.m_data) {
        cout << "In String(String&&). length = " << sizeof(str.m_data) << ". Moving resource." << endl;

        // Release the data pointer from the source object so that
        // the destructor does not free the memory multiple times.
        str.m_data = nullptr;
    };

    // Destructor.
    ~String() {
        cout << "In ~String(). length = " << strlen(m_data)+1 << ".";

        if (m_data != nullptr)
        {
            cout << " Deleting resource.";
            // Delete the resource.
            delete[] m_data;
        }

        cout << endl;
    };

    // Copy assignment operator.
    String& operator=(const String& str) {
        cout << "In operator=(const String&). length = " << strlen(str.m_data)+1 << ". Copying resource." << endl;

        if (this != &str)
        {
            // Free the existing resource.
            delete[] m_data;
            m_data = new char[strlen(str.m_data)+1];
            memcpy(m_data, str.m_data, strlen(str.m_data)+1);
        }
        return *this;
    };

    String& operator=(String&& str) noexcept {
        cout << "In operator=(String&&). length = " << sizeof(str.m_data) << "." << endl;

        if (this != &str)
        {
            // Free the existing resource.
            delete[] m_data;

            // Copy the data pointer and its length from the
            // source object.
            m_data = new char[strlen(str.m_data)+1];
            memcpy(m_data, str.m_data, strlen(str.m_data)+1);
            //m_data = str.m_data;

            // Release the data pointer from the source object so that
            // the destructor does not free the memory multiple times.
            str.m_data = nullptr;
        }
        return *this;
    };

    const char* data() const { return m_data; };
    private:
        char* m_data;
};

int main()
{
    String s0 = "Hello, World!";
    String s1 = s0;     // copy construction
    String s2 = std::move(s0);  // move construction

    String s3 = "Goodbye!";
    String s4 = "Foo";
    String s5 = "Bar";

    s4 = s3;    // copy assignment
    s5 = std::move(s3);     // move assignment

    cout << s1.data() << endl;
    cout << s2.data() << endl;

    cout << s4.data() << endl;
    cout << s5.data() << endl;

    return 0;
}