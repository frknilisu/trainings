#ifndef MY_STRING_H
#define MY_STRING_H

class String
{
public:
    String(const char* s);

    String(const String& str);
    String(String&& str) noexcept;

    ~String();

    String& operator = (const String& str);
    String& operator = (String&& str) noexcept;

    const char* data() const;

private:
    char* m_data;
};

#endif