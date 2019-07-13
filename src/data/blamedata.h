#ifndef BLAMEDATA_H
#define BLAMEDATA_H

#include <QString>
#include <vector>

namespace quokkagit
{
    struct SBlameData
    {
        QString sha;
        QString signature;
        std::size_t line;
        QString data;
    };

    using tvBlameData = std::vector<SBlameData>;
}

#endif // BLAMEDATA_H
