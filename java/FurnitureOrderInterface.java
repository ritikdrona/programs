import java.util.HashMap;

public interface FurnitureOrderInterface {
    public void addToOrder(final Furniture type, final int furnitureCount);
    public HashMap<Furniture, Integer> getOrderedFurniture();
    public float getTotalOrderCost();
    public int getTypeCount(Furniture type);
    public float getTypeCost(Furniture type);
    public int getTotalOrderQuantity();
}
