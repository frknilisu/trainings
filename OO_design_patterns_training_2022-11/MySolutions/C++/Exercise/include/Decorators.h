#ifndef DECORATORS_H
#define DECORATORS_H

#include <memory>
#include <string>
#include <vector>

class Component
{
public:
    Component() = default;
    Component(const Component&) = default;
    Component(Component&&) = default;
    Component& operator = (const Component&) = default;
    Component& operator = (Component&&) = default;

    virtual ~Component() = default;

    virtual std::vector<std::string> GetData() const = 0;
};

class ConcreteComponent : public Component
{
public:
    ConcreteComponent(const std::vector<std::string>& data) : _data(data) {}
    std::vector<std::string> GetData() const override { return _data; }
private:
    std::vector<std::string> _data;
};

class Decorator: public Component
{
public:
    Decorator(std::unique_ptr<Component> component) : _component(std::move(component)) {}
    std::vector<std::string> GetData() const override { return _component->GetData(); }
private:
    std::unique_ptr<Component> _component;
};

class ReverseDecorator: public Decorator
{
public:
    ReverseDecorator(std::unique_ptr<Component> component) : Decorator(std::move(component)) {}
    std::vector<std::string> GetData() const override;
private:
    static std::string ReverseText(const std::string& text);
};

class OrderDecorator: public Decorator
{
public:
    OrderDecorator(std::unique_ptr<Component> component) : Decorator(std::move(component)) {}
    std::vector<std::string> GetData() const override;
};

class FilterDecorator: public Decorator
{
public:
    FilterDecorator(std::unique_ptr<Component> component) : Decorator(std::move(component)) {}
    std::vector<std::string> GetData() const override;
};

#endif