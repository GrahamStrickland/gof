#ifndef COMPOSITION_H
#define COMPOSITION_H

class Component;
class Compositor;

class Composition {
public:
    Composition(Compositor*);
    void Repair();
private:
    Compositor* _compositor;
    Component* _components;     // the list of components
    int _componentCount;        // the number of components
    int _lineWidth;             // the Composition's line width
    int* _lineBreaks;           // the position of linebreaks
                                // in components
    int _lineCount;
};
#endif // COMPOSITION_H
