using System;
using System.Collections.Generic;

namespace Exercise
{
    public abstract class Component
    {
        public abstract List<string> GetData();
    }

    public class ConcreteComponent : Component
    {
        private readonly List<string> m_data;

        public ConcreteComponent(List<string> data) { m_data = data; }
        public override List<string> GetData() { return m_data; }
    }

    public class Decorator : Component
    {
        private readonly Component m_component;

        public Decorator(Component component) { m_component = component; }
        public override List<string> GetData() { return m_component.GetData(); }
    }

    public class OrderDecorator : Decorator
    {
        public OrderDecorator(Component component) : base(component) {}

        public override List<string> GetData()
        {
            var data = base.GetData();
            data.Sort();
            return data;
        }
    }

    public class ReverseDecorator : Decorator
    {
        public ReverseDecorator(Component component) : base(component) {}

        public override List<string> GetData()
        {
            var data = base.GetData();

            for (var i = 0; i < data.Count; i++)
            {
                data[i] = ReverseText(data[i]);
            }

            return data;
        }

        private static string ReverseText(string text)
        {
            char[] array = text.ToCharArray();
            Array.Reverse(array);
            return new string(array);
        }
    }

    public class FilterDecorator : Decorator
    {
        public FilterDecorator(Component component) : base(component) {}

        public override List<string> GetData()
        {
            var data = base.GetData();
            data.RemoveAll(d => d.Contains("es"));
            return data;
        }
    }
}
