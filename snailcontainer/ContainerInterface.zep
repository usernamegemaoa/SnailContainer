namespace SnailContainer;

use SnailContainer\Exception\ContainerException;
use SnailContainer\Exception\NotFoundException;

interface ContainerInterface
{
    /**
     * Finds an entry of the container by its identifier and returns it.
     *
     * @param string id Identifier of the entry to look for.
     *
     * @throws NotFoundException  No entry was found for this identifier.
     * @throws ContainerException Error while retrieving the entry.
     *
     * @return mixed Entry.
     */
    public function get(id);
    
    
    
    /**
     * Returns true if the container can return an entry for the given identifier.
     * Returns false otherwise.
     * 
     * `has(id)` returning true does not mean that `get(id)` will not throw an exception.
     * It does however mean that `get(id)` will not throw a `NotFoundException`.
     *
     * @param string id Identifier of the entry to look for.
     *
     * @return boolean
     */
    public function has(id);
}
