#include "StockService.h"

using namespace CitrusFood;

List<StockDTO^>^ StockService::GetLowStock(int limit) {
    List<StockDTO^>^ list = gcnew List<StockDTO^>();

    list->Add(gcnew StockDTO("Pan", 3));
    list->Add(gcnew StockDTO("Queso", 2));
    list->Add(gcnew StockDTO("Papas", 5));
    list->Add(gcnew StockDTO("Carne", 1));
    list->Add(gcnew StockDTO("Lechuga", 4));

    return list;
}