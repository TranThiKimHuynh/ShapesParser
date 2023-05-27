#include "Parser.h"

/// <summary>
/// Them 1 loai hinh vao map list cua factory
/// </summary>
/// <param name="type">loai hinh</param>
/// <param name="parser">kieu parser tuong voi loai hinh</param>
void ParserFactory:: registerWith(string type, shared_ptr<IParser> parser) {
    _prototypes.insert({ type, parser });
}

/// <summary>
/// Lua chon ham parser tuong ung voi tung loai hinh
/// </summary>
/// <param name="type">loai hinh</param>
/// <returns>IParser pointer ung voi loai hinh </returns>
shared_ptr<IParser>ParserFactory::select(string type) {
    shared_ptr<IParser> parser = nullptr;

    if (_prototypes.contains(type)) {
        parser = _prototypes[type];
    }

    return parser;
}
/// <summary>
/// Chuyen doi 1 chuoi du lieu dau vao thanh thong tin cua hinh vuong
/// </summary>
/// <param name="data">Chuoi can chuyen co dang "Square: a = "</param>
/// <returns>Hinh vuong voi day du thong tin </returns>
shared_ptr<Shape> SquareParser::parse(stringstream data) {

    try {
        string temp;
        getline(data, temp, '=');

        string buffer;
        getline(data, buffer);
        float aside = stof(buffer);
        // Loi mien gia tri canh > 0
        if (aside <= 0) {
            shared_ptr<Shape> error = nullptr;
            return error;
        }

        shared_ptr<Shape> result = make_shared<Square>(aside);
        return result;
    }
    // Loi du lieu bi hong khong parse duoc
    catch (const invalid_argument& e) {
        shared_ptr<Shape> error = nullptr;
        return error;
    }
    // Loi tran mien du lieu
    catch (const out_of_range& e) {
        shared_ptr<Shape> error = nullptr;
        return error;
    }

}

/// <summary>
/// Chuyen doi 1 chuoi du lieu dau vao thanh thong tin cua hinh tron
/// </summary>
/// <param name="data">Chuoi can chuyen co dang "Circle: r = "</param>
/// <returns>Hinh tron voi day du thong tin </returns>
shared_ptr<Shape> CircleParser::parse(stringstream data) {

    try {
        string temp;
        getline(data, temp, '=');

        string buffer;
        getline(data, buffer);
        float r = stof(buffer);
        // Loi mien gia tri ban kinh > 0
        if (r <= 0) {
            shared_ptr<Shape> error = nullptr;
            return error;
        }

        shared_ptr<Shape> result = make_shared<Circle>(r);
        return result;
    }

    // Loi du lieu bi hong khong parse duoc
    catch (const invalid_argument& e) {
        shared_ptr<Shape> error = nullptr;
        return error;
    }
    // Loi tran mien du lieu
    catch (const out_of_range& e) {
        shared_ptr<Shape> error = nullptr;
        return error;
    }
}
/// <summary>
/// Chuyen doi 1 chuoi du lieu dau vao thanh thong tin cua hinh chu nhat
/// </summary>
/// <param name="data">Chuoi can chuyen co dang "Rectangle: w = , h= "</param>
/// <returns>Hinh chu nhat voi day du thong tin</returns>
shared_ptr<Shape>RectangleParser::parse(stringstream data) {

    try {
        string temp;
        getline(data, temp, '=');

        string buffer;
        getline(data, buffer, ',');
        float width = stof(buffer);

        getline(data, temp, '=');

        getline(data, buffer);
        float height = stof(buffer);
        // Loi mien gia tri chieu dai phai  > 0 va chieu rong phai > 0
        if (width * height <= 0 || width <= 0 && height <= 0) {
            shared_ptr<Shape> error = nullptr;
            return error;
        }

        shared_ptr<Shape> result = make_shared<Rectangle>(height, width);
        return result;
    }
    // Loi du lieu bi hong khong parse duoc
    catch (const invalid_argument& e) {
        shared_ptr<Shape> error = nullptr;
        return error;
    }
    // Loi tran mien du lieu
    catch (const out_of_range& e) {
        shared_ptr<Shape> error = nullptr;
        return error;
    }
}

/// <summary>
/// Chuyen doi 1 chuoi du lieu dau vao thanh thong tin cua tam giac
/// </summary>
/// <param name="data">Chuoi can chuyen co dang "Triangle: a = , b= , c= "</param>
/// <returns>Hinh tam giac voi day du thong tin</returns>
shared_ptr<Shape> TriangleParser::parse(stringstream data) {

    try {
        string temp;
        getline(data, temp, '=');

        string buffer;
        getline(data, buffer, ',');
        float aside1 = stof(buffer);

        getline(data, temp, '=');

        getline(data, buffer,',');

        float aside2 = stof(buffer);

        getline(data, temp, '=');

        getline(data, buffer);

        float aside3 = stof(buffer);

        // Loi mien gia tri tat ca cac canh cua tam giac phai co do dai > 0
      
        if (aside1 <= 0) {
            shared_ptr<Shape> error = nullptr;
            return error;
        }

        if (aside2 <= 0) {
            shared_ptr<Shape> error = nullptr;
            return error;
        }
        if (aside2 <= 0) {
            shared_ptr<Shape> error = nullptr;
            return error;
        }

        shared_ptr<Shape> result = make_shared<Triangle>(aside1,aside2,aside3);
        return result;
    }
    // Loi du lieu bi hong khong parse duoc
    catch (const invalid_argument& e) {
        shared_ptr<Shape> error = nullptr;
        return error;
    }
    // Loi tran mien du lieu
    catch (const out_of_range& e) {
        shared_ptr<Shape> error = nullptr;
        return error;
    }
}

/// <summary>
/// Chuyen doi 1 chuoi du lieu dau vao thanh thong tin cua hinh thoi
/// </summary>
/// <param name="data">Chuoi can chuyen co dang "Rhombus: d1 = , d2= "</param>
/// <returns>Hinh thoi voi day du thong tin</returns>
shared_ptr<Shape>RhombusParser::parse(stringstream data) {

    try {
        string temp;
        getline(data, temp, '=');

        string buffer;
        getline(data, buffer, ',');
        float  diagon1= stof(buffer);

        getline(data, temp, '=');

        getline(data, buffer);
        float diagon2 = stof(buffer);
        // Loi mien gia tri chieu dai phai  > 0 va chieu rong phai > 0
        if (diagon1 * diagon2 <= 0 || diagon1 <= 0 && diagon2 <= 0) {
            shared_ptr<Shape> error = nullptr;
            return error;
        }

        shared_ptr<Shape> result = make_shared<Rhombus>(diagon1, diagon2);
        return result;
    }
    // Loi du lieu bi hong khong parse duoc
    catch (const invalid_argument& e) {
        shared_ptr<Shape> error = nullptr;
        return error;
    }
    // Loi tran mien du lieu
    catch (const out_of_range& e) {
        shared_ptr<Shape> error = nullptr;
        return error;
    }
}

/// <summary>
/// Chuyen doi 1 chuoi du lieu dau vao thanh thong tin cua hinh ellipse
/// </summary>
/// <param name="data">Chuoi can chuyen co dang "Ellipse: ma = , mi= "</param>
/// <returns>Hinh thoi voi day du thong tin</returns>
shared_ptr<Shape>EllipseParser::parse(stringstream data) {

    try {
        string temp;
        getline(data, temp, '=');

        string buffer;
        getline(data, buffer, ',');
        float  majorAxis = stof(buffer);

        getline(data, temp, '=');

        getline(data, buffer);
        float minorAxis = stof(buffer);
        // Loi mien gia tri chieu dai phai  > 0 va chieu rong phai > 0
        if (majorAxis * minorAxis <= 0 || majorAxis <= 0 && minorAxis <= 0) {
            shared_ptr<Shape> error = nullptr;
            return error;
        }

        shared_ptr<Shape> result = make_shared<Ellipse>(majorAxis, minorAxis);
        return result;
    }
    // Loi du lieu bi hong khong parse duoc
    catch (const invalid_argument& e) {
        shared_ptr<Shape> error = nullptr;
        return error;
    }
    // Loi tran mien du lieu
    catch (const out_of_range& e) {
        shared_ptr<Shape> error = nullptr;
        return error;
    }
}